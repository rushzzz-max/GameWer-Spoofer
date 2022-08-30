/*

meme anticheat



credits:
1. https://github.com/OrangeDoggo/GameWer/blob/main/Alkad/CustomSystem/Information/Interface.cs
2. https://github.com/wepeco/registry_editor/blob/master/registry_editor/main.cpp#L22

-- made by rqhz

made in 15mins

*/

#include <iostream>
#include <windows.h>
#include <chrono>
#include <thread>
#include <random>
#include <algorithm>
#include <array>
#include "keys.h"

#define outSS( text, ... ) std::printf( text, ##__VA_ARGS__ )
#pragma warning( disable : 4312 )


char random_char() {
	std::random_device random_device;
	std::mt19937 mersenne_generator(random_device());
	std::uniform_int_distribution<> distribution(97, 122);

	return static_cast<unsigned char>(distribution(mersenne_generator));
}








int main()
{
	HKEY output = nullptr;
	static constexpr std::size_t string_length = 16;
	static const auto start_time = std::chrono::system_clock::now().time_since_epoch();



	
	output = nullptr;
	auto open_status = RegOpenKeyExA(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OEMInformation", 0, KEY_ALL_ACCESS, &output);

	if (open_status != ERROR_SUCCESS) {
		outSS("[-] failed to open handle to HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OEMInformation\\");

		std::this_thread::sleep_for(std::chrono::seconds(7));
		return EXIT_FAILURE;
	}


	
	key::hkey OEMInformation_key(output);
	{
		std::string randomized_string;
		randomized_string.resize(string_length);
		std::generate_n(randomized_string.begin(), string_length, random_char);

		std::array sub_keys{ "Model", "null" };

		auto set_status = ERROR_SUCCESS;

		for (auto idx = 0; idx < sub_keys.size(); idx++) {
			set_status = RegSetValueExA(OEMInformation_key.get(), sub_keys[idx], 0, REG_SZ, (std::uint8_t*)randomized_string.c_str(), string_length);

			if (set_status == ERROR_SUCCESS)
				outSS("[+] set %s to: %s\n", sub_keys[idx], randomized_string.c_str());
			else
				outSS("[-] failed to set %s\n", sub_keys[idx]);
		}
	}

	output = nullptr;
	open_status = RegOpenKeyExA(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OEMInformation", 0, KEY_ALL_ACCESS, &output);

	if (open_status != ERROR_SUCCESS) {
		outSS("[-] failed to open handle to HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OEMInformation\n");

		std::this_thread::sleep_for(std::chrono::seconds(7));
		return EXIT_FAILURE;
	}

	key::hkey OEMInformation2_key(output);
	{
		std::string randomized_string;
		randomized_string.resize(string_length);
		std::generate_n(randomized_string.begin(), string_length, random_char);

		std::array sub_keys{ "Manufacturer", "null" };

		auto set_status = ERROR_SUCCESS;

		for (auto idx = 0; idx < sub_keys.size(); idx++) {
			set_status = RegSetValueExA(OEMInformation_key.get(), sub_keys[idx], 0, REG_SZ, (std::uint8_t*)randomized_string.c_str(), string_length);

			if (set_status == ERROR_SUCCESS)
				outSS("[+] set %s to: %s\n", sub_keys[idx], randomized_string.c_str());
			else
				outSS("[-] failed to set %s\n", sub_keys[idx]);
		}
	}

	output = nullptr;
	open_status = RegOpenKeyExA(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion", 0, KEY_ALL_ACCESS, &output);

	if (open_status != ERROR_SUCCESS) {
		outSS("[-] failed to open handle to HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\n");

		std::this_thread::sleep_for(std::chrono::seconds(7));
		return EXIT_FAILURE;
	}

	key::hkey ProductName_key(output);
	{
		std::string randomized_string;
		randomized_string.resize(string_length);
		std::generate_n(randomized_string.begin(), string_length, random_char);

		std::array sub_keys{ "ProductName", "null" };

		auto set_status = ERROR_SUCCESS;

		for (auto idx = 0; idx < sub_keys.size(); idx++) {
			set_status = RegSetValueExA(ProductName_key.get(), sub_keys[idx], 0, REG_SZ, (std::uint8_t*)randomized_string.c_str(), string_length);

			if (set_status == ERROR_SUCCESS)
				outSS("[+] set %s to: %s\n", sub_keys[idx], randomized_string.c_str());
			else
				outSS("[-] failed to set %s\n", sub_keys[idx]);
		}

	}

	open_status = RegOpenKeyExA(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion", 0, KEY_ALL_ACCESS, &output);

	if (open_status != ERROR_SUCCESS) {
		outSS("[-] failed to open handle to HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\n");

		std::this_thread::sleep_for(std::chrono::seconds(7));
		return EXIT_FAILURE;
	}

	key::hkey ProductName2_key(output);
	{
		std::string randomized_string;
		randomized_string.resize(string_length);
		std::generate_n(randomized_string.begin(), string_length, random_char);

		std::array sub_keys{ "RegisteredOrganization", "null" };

		auto set_status = ERROR_SUCCESS;

		for (auto idx = 0; idx < sub_keys.size(); idx++) {
			set_status = RegSetValueExA(ProductName2_key.get(), sub_keys[idx], 0, REG_SZ, (std::uint8_t*)randomized_string.c_str(), string_length);

			if (set_status == ERROR_SUCCESS)
				outSS("[+] set %s to: %s\n", sub_keys[idx], randomized_string.c_str());
			else
				outSS("[-] failed to set %s\n", sub_keys[idx]);
		}

	}

	open_status = RegOpenKeyExA(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion", 0, KEY_ALL_ACCESS, &output);

	if (open_status != ERROR_SUCCESS) {
		outSS("[-] failed to open handle to HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\n");

		std::this_thread::sleep_for(std::chrono::seconds(7));
		return EXIT_FAILURE;
	}

	key::hkey ProductName3_key(output);
	{
		std::string randomized_string;
		randomized_string.resize(string_length);
		std::generate_n(randomized_string.begin(), string_length, random_char);

		std::array sub_keys{ "RegisteredOwner", "null" };

		auto set_status = ERROR_SUCCESS;

		for (auto idx = 0; idx < sub_keys.size(); idx++) {
			set_status = RegSetValueExA(ProductName3_key.get(), sub_keys[idx], 0, REG_SZ, (std::uint8_t*)randomized_string.c_str(), string_length);

			if (set_status == ERROR_SUCCESS)
				outSS("[+] set %s to: %s\n", sub_keys[idx], randomized_string.c_str());
			else
				outSS("[-] failed to set %s\n", sub_keys[idx]);
		}

	}

	open_status = RegOpenKeyExA(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion", 0, KEY_ALL_ACCESS, &output);

	if (open_status != ERROR_SUCCESS) {
		outSS("[-] failed to open handle to HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\n");

		std::this_thread::sleep_for(std::chrono::seconds(7));
		return EXIT_FAILURE;
	}

	key::hkey ProductName4_key(output);
	{
		std::string randomized_string;
		randomized_string.resize(string_length);
		std::generate_n(randomized_string.begin(), string_length, random_char);

		std::array sub_keys{ "SystemRoot", "null" };

		auto set_status = ERROR_SUCCESS;

		for (auto idx = 0; idx < sub_keys.size(); idx++) {
			set_status = RegSetValueExA(ProductName4_key.get(), sub_keys[idx], 0, REG_SZ, (std::uint8_t*)randomized_string.c_str(), string_length);

			if (set_status == ERROR_SUCCESS)
				outSS("[+] set %s to: %s\n", sub_keys[idx], randomized_string.c_str());
			else
				outSS("[-] failed to set %s\n", sub_keys[idx]);
		}

	}







	auto elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch() - start_time).count();

	outSS("[+] done in %llums\n", elapsed_time);

	std::this_thread::sleep_for(std::chrono::seconds(10));

}

