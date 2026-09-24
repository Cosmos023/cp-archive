int main()
{
	auto start = chrono::high_resolution_clock::now();
	
	// program here

	auto end = chrono::high_resolution_clock::now();

	cerr << chrono::duration<double>(end - start).count() << '\n';
}