/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TSUtility/TSUtility-Structs.h>
@interface TSURangeList : NSObject {

	vector<_NSRange, std::__1::allocator<_NSRange> >* mRangeList;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) const vector<_NSRange* rangeVector; 
+(id)stringValueForRangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange> >*)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)stringValue;
-(unsigned long long)count;
-(void)removeRangeAtIndex:(unsigned long long)arg1 ;
-(void)reverse;
-(void)insertRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(void)addRange:(NSRange)arg1 ;
-(id)initWithRangeList:(id)arg1 ;
-(void)replaceWithRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(void)consolidate;
-(id)initWithRangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange> >*)arg1 ;
-(const vector<_NSRange*)rangeVector;
-(id)initWithRangeVectorMove:(vector<_NSRange, std::__1::allocator<_NSRange> >*)arg1 ;
@end
