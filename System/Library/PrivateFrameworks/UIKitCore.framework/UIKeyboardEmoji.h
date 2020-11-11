/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface UIKeyboardEmoji : NSObject {

	NSString* _emojiString;
	unsigned long long _variantMask;

}

@property (nonatomic,retain) NSString * emojiString;              //@synthesize emojiString=_emojiString - In the implementation block
@property (assign) unsigned long long variantMask;                //@synthesize variantMask=_variantMask - In the implementation block
+(id)emojiWithString:(id)arg1 withVariantMask:(unsigned long long)arg2 ;
-(id)key;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)emojiString;
-(void)setEmojiString:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 withVariantMask:(unsigned long long)arg2 ;
-(void)setVariantMask:(unsigned long long)arg1 ;
-(unsigned long long)variantMask;
@end
