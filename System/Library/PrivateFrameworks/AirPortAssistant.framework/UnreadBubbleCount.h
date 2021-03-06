/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKitCore/UIView.h>

@interface UnreadBubbleCount : UIView {

	CGSize _textSize;
	BOOL _isSelected;
	long long _count;

}

@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL isSelected;              //@synthesize isSelected=_isSelected - In the implementation block
+(int)initImageCache;
+(void)deallocImageCache;
-(void)setCount:(long long)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)drawRect:(CGRect)arg1 ;
-(long long)count;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)calculateTextMetrics;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
@end

