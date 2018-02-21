module Main where

import Control.Monad
import Control.Applicative
import System.IO
import Data.List (sort)


getMultipleLines :: Int -> IO [String]
getMultipleLines n
  | n <= 0 = return []
  | otherwise = do
      x  <- getLine
      xs <- getMultipleLines (n-1)
      let ret = (x:xs)
      return ret


main :: IO ()
main = do
  n_temp <- getLine
  let n = read n_temp :: Int
  arr_temp <- getMultipleLines n
  let arr = map (\m -> read m :: Integer) arr_temp
  mapM_ print $ sort arr
