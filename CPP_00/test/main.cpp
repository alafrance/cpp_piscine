/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:07:29 by alafranc          #+#    #+#             */
/*   Updated: 2021/09/07 13:04:59 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"
#include <iostream>

int main() {
    Sample instance;
    Sample *instancep = &instance;
    
    int *blablou = NULL;
    void (Sample::*f)(void) const;
    instance.foo = 0;
    blablou = &instance.foo;

    f = &Sample::bar;
    (instance.*f)();
    (instancep->*f)();
}