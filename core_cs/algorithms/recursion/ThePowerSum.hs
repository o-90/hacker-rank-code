module Main where

getSum m n c
  | l < 0 = 0
  | l == 0 = 1
  | otherwise = getSum m l (1+c) + getSum m n (1+c)
  where
    l = n - c ^ m

    
main :: IO ()
main = do
  n <- readLn :: IO Int
  m <- readLn :: IO Int
  print $ getSum m n 1
