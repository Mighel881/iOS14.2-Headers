/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface TMLArray : NSObject {

	NSMutableArray* _array;

}

@property (nonatomic,retain) NSArray * array;                         //@synthesize array=_array - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(NSArray *)array;
-(void)removeAllObjects;
-(id)get:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)append:(id)arg1 ;
-(void)remove:(unsigned long long)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(void)setArray:(NSArray *)arg1 ;
-(void)set:(unsigned long long)arg1 value:(id)arg2 ;
@end
