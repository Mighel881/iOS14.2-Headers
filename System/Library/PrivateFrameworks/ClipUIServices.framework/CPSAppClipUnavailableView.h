/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class CPSVibrantLabel, NSString;

@interface CPSAppClipUnavailableView : UIView {

	CPSVibrantLabel* _reasonLabel;

}

@property (assign,nonatomic) NSString * reasonString; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setUpViews;
-(NSString *)reasonString;
-(void)setReasonString:(NSString *)arg1 ;
@end

