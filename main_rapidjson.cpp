#include "rapidjson/document.h"
#include "rapidjson/pointer.h"
#include "rapidjson/writer.h"
#include "rapidjson/filereadstream.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>
#include <cstdio>

int main() {

   FILE* fp = fopen("citylots.json", "r");

   char *buffer = new char [189778220];
   rapidjson::FileReadStream is(fp, buffer, 189778220);

   rapidjson::Document d;
   d.ParseStream(is);

   if(rapidjson::Value *value = GetValueByPointer(d, "/features/100000/geometry/coordinates/0/0")) { 
      rapidjson::StringBuffer sb;
      rapidjson::Writer<rapidjson::StringBuffer> writer(sb);
      value->Accept(writer);
      std::cout << sb.GetString() << std::endl;
   }

   fclose(fp);
   delete[] buffer;

}
