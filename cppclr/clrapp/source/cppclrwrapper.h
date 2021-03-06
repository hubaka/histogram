#pragma once
#include "TweetBankCore.h"
#include "sobelfilter.h"
#include "prewittfilter.h"

namespace cppclrwrapper
{
   public ref class ClrWrapper
   {
   public:
	   ClrWrapper();
      int tweet();
	  int executeSobelFilter(System::String^ inputFilePath, System::String^ ouputFilePath);
	  int executePrewittFilter(System::String^ inputFilePath, System::String^ ouputFilePath);
   private:
      TweetBankCore* mTweetBankCore;
   };

}

