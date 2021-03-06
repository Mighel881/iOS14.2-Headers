/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSListFormatter.h>

@class NSString;

@interface VUIICUListFormatter : NSListFormatter {

	NSString* _style;

}

@property (nonatomic,copy) NSString * style;              //@synthesize style=_style - In the implementation block
+(id)localizedStringByJoiningStrings:(id)arg1 ;
+(id)localizedStringByJoiningStrings:(id)arg1 style:(id)arg2 ;
-(id)_stringFromStringArray:(id)arg1 ;
-(NSString *)style;
-(id)initWithLocale:(id)arg1 ;
-(void)setStyle:(NSString *)arg1 ;
-(id)initWithLocale:(id)arg1 style:(id)arg2 ;
@end

