/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormPeripheralBase.h>

@class NSString;

@interface WKFormSelectControl : WKFormPeripheralBase {

	RetainPtr<NSObject<WKFormControl> >* _control;

}

@property (nonatomic,readonly) NSString * selectFormPopoverTitle; 
-(NSString *)selectFormPopoverTitle;
-(id)initWithView:(id)arg1 ;
-(BOOL)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1 ;
-(void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(BOOL)arg3 ;
@end
