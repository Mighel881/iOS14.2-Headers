/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSMutableArray;

@interface TextResults : NSObject {

	NSArray* _cols;
	NSMutableArray* _mutableCols;

}

@property (nonatomic,retain) NSMutableArray * mutableCols;              //@synthesize mutableCols=_mutableCols - In the implementation block
@property (nonatomic,retain) NSArray * cols;                            //@synthesize cols=_cols - In the implementation block
@property (readonly) unsigned long long colCount; 
-(NSArray *)cols;
-(id)init;
-(unsigned long long)colCount;
-(void)setCols:(NSArray *)arg1 ;
-(void)addColumn:(id)arg1 ;
-(void)sortCols;
-(id)transcriptionOfPath:(id)arg1 tokenProcessingBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)mutableCols;
-(void)setMutableCols:(NSMutableArray *)arg1 ;
@end
