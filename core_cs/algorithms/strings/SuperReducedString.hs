module Main where


import Data.List


removeStrPairs :: String -> String
removeStrPairs sp
  | sp == w sp = sp
  | otherwise = removeStrPairs (w sp)
  where
    w str = concat $ map (take 1) $ filter (\x -> length x `mod` 2 /= 0) $ group str


formatOuput :: String -> String
formatOuput "" = "Empty String"
formatOuput x = x


main :: IO ()
main = do
  s <- getLine
  putStrLn $ (formatOuput . removeStrPairs) s
