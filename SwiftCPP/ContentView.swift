//
//  ContentView.swift
//  SwiftCPP
//
//  Created by Anurag Ajwani on 14/09/2020.
//

import SwiftUI              

struct ContentView: View {
    var body: some View {
//        Text("Hello, world!").padding()
//        Text(HelloWorldWrapper().sayHello()).padding()
        let wrapper = HelloWorldWrapper()
        Text(String(wrapper.sayHello())).padding()
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
                                        
