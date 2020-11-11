/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIFoundation/UIFoundation-Structs.h>
@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject {

	NSTextContentManager* _textContentManager;
	NSTextRange* _elementRange;

}

@property (__weak) NSTextContentManager * textContentManager; 
@property (retain) NSTextRange * elementRange;                             //@synthesize elementRange=_elementRange - In the implementation block
-(id)init;
-(NSTextRange *)elementRange;
-(NSTextContentManager *)textContentManager;
-(CGSize)estimatedIntrinsicContentSizeForTextLayoutManager:(id)arg1 ;
-(void)setElementRange:(NSTextRange *)arg1 ;
-(void)setTextContentManager:(NSTextContentManager *)arg1 ;
-(id)initWithTextContentManager:(id)arg1 ;
-(void)dealloc;
@end
