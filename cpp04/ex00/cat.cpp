/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepi <pepi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:53:18 by pepi              #+#    #+#             */
/*   Updated: 2024/11/19 11:53:20 by pepi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Un chat est né" << std::endl;
}

Cat::~Cat() {
    std::cout << "Un chat nous a quittés" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Miaou! Miaou!" << std::endl;
}
