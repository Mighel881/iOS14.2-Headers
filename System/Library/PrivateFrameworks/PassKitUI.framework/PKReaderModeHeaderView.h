/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKTableHeaderView.h>

@class PKPaymentSetupProduct, NSArray, NSDictionary;

@interface PKReaderModeHeaderView : PKTableHeaderView {

	PKPaymentSetupProduct* _product;
	NSArray* _resourceKeys;
	long long _context;
	NSDictionary* _readerModeResources;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)layoutSubviews;
-(void)_configureForCurrentState;
-(id)_subtitleForState:(unsigned long long)arg1 ;
-(id)initWithState:(unsigned long long)arg1 context:(long long)arg2 product:(id)arg3 ;
-(id)_titleForState:(unsigned long long)arg1 ;
@end

