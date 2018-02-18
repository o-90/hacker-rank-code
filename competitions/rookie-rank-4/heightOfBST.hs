module Main where


data BST a = Empty
           | Node (BST a) a (BST a)
  deriving (Show, Eq)


-- remove duplicates from a list (and preserve order)
removeDuplicates :: (Eq a) => [a] -> [a]
removeDuplicates = removeDuplicates' []
  where
    removeDuplicates' _ [] = []
    removeDuplicates' acc (x:xs)
      | x `elem` acc = removeDuplicates' acc xs
      | otherwise    = x : removeDuplicates' (x:acc) xs


-- add an element to a BST
insertBST :: (Ord a) => BST a -> a -> BST a
insertBST Empty k = Node Empty k Empty
insertBST (Node l x r) k | k < x     = Node (insertBST l k) x r
                         | otherwise = Node l x (insertBST r k)


-- given a list create a BST
createBSTFromList :: (Ord a) => [a] -> BST a
createBSTFromList = foldl insertBST Empty


-- get the height of a tree
height :: BST a -> Int
height Empty        = 0
height (Node l _ r) = 1 + max (height l) (height r)


-- calculate the total height
totalHeight :: BST a -> Int
totalHeight Empty = 0
totalHeight (Node l _ r) = x + y + totalHeight l + totalHeight r
  where
    x | x' < 0 = 0
      | otherwise = x'
    y | y' < 0 = 0
      | otherwise = y'
    x' = height l - 1
    y' = height r - 1


-- main method
main :: IO ()
main = do
  n_temp <- getLine
  let n = read n_temp :: Int
  arr_temp <- getLine
  let arr_tmp = (map (\x -> read x :: Int) . words) arr_temp
  let arr = removeDuplicates arr_tmp
  let myBST = createBSTFromList arr
  let h = height myBST - 1
  print h
  print $ totalHeight myBST + h
