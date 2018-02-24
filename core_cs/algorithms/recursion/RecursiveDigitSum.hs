import Data.Char


-- integer to a list of digits as ints
getDigits :: Int -> [Int]
getDigits = map digitToInt . show

reduceNum :: Int -> Int
reduceNum n = sum $ getDigits n

stopSuperDigiting :: Int -> Int
stopSuperDigiting n
  | n < 10    = n
  | otherwise = stopSuperDigiting (reduceNum n)


main :: IO ()
main = do
  i_temp <- getLine
  let input_temp = words i_temp
  let input = input_temp !! 0
  let n = read (input_temp !! 1) :: Int
  let initialSum = foldr ((+) . digitToInt) 0 input
  let preMultiValue = stopSuperDigiting initialSum
  let newValToReduce = preMultiValue * n
  print $ stopSuperDigiting newValToReduce
