/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NUTitleViewUpdate : NSObject {

	BOOL _cancelPendingUpdates;
	BOOL _speakAccessibilityTitleWhenDisplayed;
	id _value;
	unsigned long long _valueType;
	unsigned long long _styleType;
	double _lingerTimeInterval;
	NSString* _accessibilityTitle;
	long long _textAlignment;

}

@property (nonatomic,readonly) id value;                                                                                               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;                                                                           //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) unsigned long long styleType;                                                                           //@synthesize styleType=_styleType - In the implementation block
@property (assign,getter=shouldCancelPendingUpdates,nonatomic) BOOL cancelPendingUpdates;                                              //@synthesize cancelPendingUpdates=_cancelPendingUpdates - In the implementation block
@property (assign,nonatomic) double lingerTimeInterval;                                                                                //@synthesize lingerTimeInterval=_lingerTimeInterval - In the implementation block
@property (assign,getter=shouldSpeakAccessibilityTitleWhenDisplayed,nonatomic) BOOL speakAccessibilityTitleWhenDisplayed;              //@synthesize speakAccessibilityTitleWhenDisplayed=_speakAccessibilityTitleWhenDisplayed - In the implementation block
@property (nonatomic,copy) NSString * accessibilityTitle;                                                                              //@synthesize accessibilityTitle=_accessibilityTitle - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                                                                  //@synthesize textAlignment=_textAlignment - In the implementation block
-(void)setTextAlignment:(long long)arg1 ;
-(unsigned long long)valueType;
-(id)init;
-(long long)textAlignment;
-(void)setSpeakAccessibilityTitleWhenDisplayed:(BOOL)arg1 ;
-(id)initWithText:(id)arg1 styleType:(unsigned long long)arg2 ;
-(void)setAccessibilityTitle:(NSString *)arg1 ;
-(void)setCancelPendingUpdates:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldSpeakAccessibilityTitleWhenDisplayed;
-(BOOL)shouldCancelPendingUpdates;
-(NSString *)accessibilityTitle;
-(id)initWithImage:(id)arg1 ;
-(id)value;
-(unsigned long long)styleType;
-(id)initWithAttributedText:(id)arg1 styleType:(unsigned long long)arg2 ;
-(void)setLingerTimeInterval:(double)arg1 ;
-(id)initWithText:(id)arg1 styleType:(unsigned long long)arg2 glyph:(id)arg3 ;
-(id)initWithValue:(id)arg1 valueType:(unsigned long long)arg2 styleType:(unsigned long long)arg3 ;
-(double)lingerTimeInterval;
@end
