binary: 
	mkdir output
	g++ g_random.cc -o output/g_random
run_binary:
	mkdir output
	g++ g_random.cc -o output/g_random
	./output/g_random
run: 
	./output/g_random
clean:
	rm -rf output

