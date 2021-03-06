/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISOperation.h>

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {

	NSDictionary* _mismatches;
	id _requiredCapabilities;

}

@property (readonly) NSDictionary * mismatches; 
@property (readonly) id requiredCapabilities; 
-(void)run;
-(id)requiredCapabilities;
-(void)dealloc;
-(id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2 ;
-(void)_postDefaultDialog;
-(NSDictionary *)mismatches;
@end

