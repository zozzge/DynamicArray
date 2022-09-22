#pragma once

class DynamicArray
{

	int factor;
	int size;
	int count;
	int* data;
	


	void Resize(int newSize) {

		/* 1. Buyuklugu size*factor kadar olacak yeni bir array olustur. */
		/* 2. Eski array'dakileri yeni olusturulana kopyala */
		/* 3. Eski array'ý delete ile yok et */
		/* 4. Yeni array'ý eskisine ata */

		int* tempData;

		tempData = new int[newSize];

		for (int i = 0; i < count; i++) {
			tempData[i] = data[i];
		}

		delete data;
		data = tempData;
		size = newSize;
	}


public:

	int GetSize()
	{
		return size;
	}
	
	int GetCount() {
		/*kullanýlan array eleman sayýsý*/
		return count;
	}

	DynamicArray(int Size,int Factor)
	{
		size = Size;
		factor = Factor;

		data = new int[Size];
	}

	void Add(int Value) {
		
		if (size == count) {
			Resize(size*factor);
		}

		data[count] = Value;
		count++;
	}


	void Remove(int Index) {
		
		for (int i = 0; i < count; i++) {
			data[Index] = data[Index + 1];
		}
		count--;
	}

	void Insert(int Index, int Value) {
		
		count++;

		for (int i = count; i>=Index ; i--) {

			data[i] = data[i - 1];

	
		}
		data[Index] = Value;
    }

	int Get(int Index) {
		return data[Index];
	}

	void Sort() {

		int min;
		int temp;

		for (int j = 0; j < count; j++) {

			min = data[j];

			for (int i = j+1; i < count; i++) {

				if (min > data[i]) {
					min = data[i];

					temp = data[j];
					data[j] = data[i];
					data[i] = temp;
				}

			}
		}
		
	}

	void Shrink() {
		Resize(count);
	}



};

