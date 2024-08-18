/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:02:53 by lps               #+#    #+#             */
/*   Updated: 2024/08/18 10:43:45 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//input and output operations
#include <iostream>
//which provides functions for manipulating characters, such as std::toupper
#include <cctype>

int main(int ac, char **av)
{
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
        return 0;
    }
    for (int i = 1; i < ac; i++)
    {
       std::string str(av[i]);
       for (size_t j = 0; j < str.length(); j++)
       {
        std::cout << (char)std::toupper(str[j]);
       }
    }
    std::cout << std::endl;
}