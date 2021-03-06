/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/DOCTagIconView.h>

@class NSString;

@interface DOCTagCheckmarkView : UIImageView <DOCTagIconView> {

	long long _tagColor;

}

@property (assign,nonatomic) long long tagColor;                    //@synthesize tagColor=_tagColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)checkmarkImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateTintColor;
-(void)setTagColor:(long long)arg1 ;
-(long long)tagColor;
@end

