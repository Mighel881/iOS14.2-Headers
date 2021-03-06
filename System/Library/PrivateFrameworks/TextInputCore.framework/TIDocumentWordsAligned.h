/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject {

	NSMutableArray* _inDocumentWordsStack;
	NSMutableDictionary* _leftContextToWordMap;

}

@property (nonatomic,retain) NSMutableArray * inDocumentWordsStack;                   //@synthesize inDocumentWordsStack=_inDocumentWordsStack - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * leftContextToWordMap;              //@synthesize leftContextToWordMap=_leftContextToWordMap - In the implementation block
-(id)init;
-(id)lastWord;
-(void)addToContextMap:(id)arg1 ;
-(NSMutableDictionary *)leftContextToWordMap;
-(void)insertWord:(id)arg1 atIndex:(long long)arg2 ;
-(void)setLeftContextToWordMap:(NSMutableDictionary *)arg1 ;
-(id)description;
-(void)pushWordToDocument:(id)arg1 ;
-(id)updateWordEntryAtIndex:(unsigned long long)arg1 withAcceptedString:(id)arg2 documentContext:(id)arg3 ;
-(void)removeFromContextMap:(id)arg1 ;
-(unsigned long long)wordsCount;
-(int)deleteWordsUptoContext:(id)arg1 ;
-(NSMutableArray *)inDocumentWordsStack;
-(void)setInDocumentWordsStack:(NSMutableArray *)arg1 ;
-(id)wordsForContext:(id)arg1 ;
@end

