#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
struct Review {
	std::string title;
	int rating;
	int price;
};
bool operator<(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool worseThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool worseprice(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool worsepricerev(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool titlesort(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2);
bool FillReview(Review& rr);
void ShowReview(const std::shared_ptr<Review>& rr);
bool menu();
int main(void)
{
	int flag = 0;
	char ch;
	using namespace std;
	vector<shared_ptr<Review>> books;
	vector<shared_ptr<Review>> buf_vec;
	Review temp;
	while (FillReview(temp))
	{
		shared_ptr<Review> buf(new Review);
		buf->price = temp.price;
		buf->rating = temp.rating;
		buf->title = temp.title;
		books.push_back(buf);
	}
	buf_vec = books;
	menu();
	while (cin >> ch && ch != 'q')
	{
		switch (ch)
		{
		case 'a':
			for_each(books.begin(), books.end(), ShowReview);
			menu();
			break;
		case 'b':
			sort(buf_vec.begin(), buf_vec.end(), titlesort);
			for_each(buf_vec.begin(), buf_vec.end(), ShowReview);
			menu();
			break;
		case 'c':
			sort(buf_vec.begin(), buf_vec.end(), worseThan);
			for_each(buf_vec.begin(), buf_vec.end(), ShowReview);
			menu();
			break;
		case 'd':
			sort(buf_vec.begin(), buf_vec.end(), worseprice);
			for_each(buf_vec.begin(), buf_vec.end(), ShowReview);
			menu();
			break;
		case 'i':
			sort(buf_vec.begin(), buf_vec.end(), worsepricerev);
			for_each(buf_vec.begin(), buf_vec.end(), ShowReview);
			menu();
			break;
		default:
			ch = 'q';
			break;
		}
	}
	cout << "Bye.\n";
	return 0;
}
bool operator<(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->title < r2->title)
		return true;
	else if (r1->title == r2->title && r1->rating < r2->rating)
		return true;
	else
		return false;
}
bool worseThan(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->rating < r2->rating)
		return true;
	else
		return false;
}
bool worseprice(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->price < r2->price)
		return true;
	else
		return false;
}
bool worsepricerev(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->price > r2->price)
		return true;
	else
		return false;
}
bool FillReview(Review& rr)
{
	std::cout << "Enter book title (quit to quit): ";
	std::getline(std::cin, rr.title);
	if (rr.title == "quit")
		return false;
	std::cout << "Enter book rating: ";
	std::cin >> rr.rating;
	std::cout << "Enter book price: ";
	std::cin >> rr.price;
	if (!std::cin)
		return false;
	while (std::cin.get() != '\n')
		continue;
	return true;
}
void ShowReview(const std::shared_ptr<Review>& rr)
{
	std::cout << rr->rating << "\t" << rr->title << "\t" << rr->price << std::endl;
}
bool menu()
{
	std::cout << "a - normal       b - title" << std::endl;
	std::cout << "c - rating       d - price" << std::endl;
	std::cout << "i - revprice" << std::endl;
	std::cout << "q.quit" << std::endl;
	return true;
}
bool titlesort(const std::shared_ptr<Review>& r1, const std::shared_ptr<Review>& r2)
{
	if (r1->title < r2->title)
		return true;
	else
		return false;
}