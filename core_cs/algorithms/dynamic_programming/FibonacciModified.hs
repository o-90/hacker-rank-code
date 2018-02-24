module Main where


memoizedFib :: Integer -> Integer -> Int -> Integer
memoizedFib x y z = map fib [0 ..] !! z
  where fib 0 = x
        fib 1 = y
        fib n = memoizedFib x y (n-2) + (memoizedFib x y (n-1) * memoizedFib x y (n-1))


main :: IO()
main = do
  ks <- getLine
  let t_temp = words ks
  let t0 = read $ t_temp!!0 :: Integer
  let t1 = read $ t_temp!!1 :: Integer
  let n  = read $ t_temp!!2 :: Int
  let ans = memoizedFib t0 t1 (n-1)
  print ans
