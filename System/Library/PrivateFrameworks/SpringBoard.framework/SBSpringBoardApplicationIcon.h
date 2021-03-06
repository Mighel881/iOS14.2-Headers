/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@interface SBSpringBoardApplicationIcon : SBLeafIcon {

	long long _interfaceStyle;

}
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)init;
-(BOOL)isUninstallSupported;
-(BOOL)canTruncateLabel;
-(BOOL)canTightenLabel;
-(id)displayNameForLocation:(id)arg1 ;
-(id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2 ;
-(id)initWithInterfaceStyle:(long long)arg1 ;
-(id)_generateImageWithInfo:(SBIconImageInfo)arg1 ;
@end

