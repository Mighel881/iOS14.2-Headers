/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface AKURLRequestApprover : NSObject {

	NSArray* _whiteListedPaths;

}
-(id)initWithWhitelistedPaths:(id)arg1 ;
-(BOOL)shouldAllowRequest:(id)arg1 ;
-(BOOL)_matchInputAgainstPaths:(id)arg1 ;
@end
