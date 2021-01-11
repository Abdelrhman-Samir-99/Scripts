for((i = 1; i <= 1000; ++i)); do
	echo $i
	./gen $i > in
	./merge_sort <in > out1
	./brute <in > out2
	diff -w out1 out2 || break
done
