-- Bartosz Bednarczyk

import Control.Monad

solve :: [Int] -> [ [Int] ] -> Int
solve xs ys = foldr (+) 0 $ map (\[x,y] -> min (xs !! (x-1)) (xs !! (y-1)) ) ys

readInts :: IO [Int]
readInts = fmap (map read.words) getLine

main = do
  [n, m] <- readInts
  xs <- readInts 
  ys <- replicateM (read (show m)) readInts
  putStrLn $ show $ solve xs ys
