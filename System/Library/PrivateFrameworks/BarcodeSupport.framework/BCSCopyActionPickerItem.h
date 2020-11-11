/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BarcodeSupport/BCSActionPickerItem.h>

@class NSString;

@interface BCSCopyActionPickerItem : BCSActionPickerItem {

	NSString* _textToCopy;

}

@property (nonatomic,copy,readonly) NSString * textToCopy;              //@synthesize textToCopy=_textToCopy - In the implementation block
-(id)icon;
-(BOOL)isCopyActionItem;
-(void)performAction;
-(id)initWithAction:(id)arg1 textToCopy:(id)arg2 ;
-(NSString *)textToCopy;
@end
