/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueFastMutableArray.h>

@class NSKeyValueGetter;

@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray {

	NSKeyValueGetter* _valueGetter;

}
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(unsigned long long)count;
-(id)_nonNilArrayValueWithSelector:(SEL)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)_proxyNonGCFinalize;
@end

