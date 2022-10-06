//
//  ContentView.swift
//  SwiftCPP
//
//  Created by Anurag Ajwani on 14/09/2020.
//

import SwiftUI              

struct ContentView: View {
    var body: some View {
        let wrapper = HelloWorld_initialize();
        Text(String(cString:HelloWorld_sayHello(wrapper))).padding()
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
                                        
