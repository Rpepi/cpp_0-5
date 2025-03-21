/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepi <pepi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:30:00 by pepi              #+#    #+#             */
/*   Updated: 2025/03/20 13:15:57 by pepi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data *data = new Data;
    data->name = "rpepi";
    data->age = 42;
    data->next = NULL;
    
    std::cout << "Original data:" << std::endl;
    std::cout << "Address: " << data << std::endl;
    std::cout << "Name: " << data->name << std::endl;
    std::cout << "Age: " << data->age << std::endl;

    unsigned long serialized = Serialization::serialize(data);
    std::cout << "\nSerialized value: " << serialized << std::endl;

    Data *deserialized = Serialization::deserialize(serialized);

    std::cout << "\nDeserialized data:" << std::endl;
    std::cout << "Address: " << deserialized << std::endl;
    std::cout << "Name: " << deserialized->name << std::endl;
    std::cout << "Age: " << deserialized->age << std::endl;

    std::cout << "\nPointer comparison: " << (data == deserialized ? "SUCCESS" : "FAILURE") << std::endl;

    // Nettoyage
    delete data;
    
    return 0;
}
