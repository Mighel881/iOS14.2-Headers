/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NaturalLanguage/NLDataProvider.h>

@interface NLPModelTrainingDataProvider : NLDataProvider {

	unsigned long long _numberOfInstances;
	void* _dataSource;
	/*^block*/id _instanceDataProvider;

}
-(unsigned long long)numberOfInstances;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 numberOfInstances:(unsigned long long)arg2 dataSource:(void*)arg3 instanceDataProvider:(/*^block*/id)arg4 ;
@end

