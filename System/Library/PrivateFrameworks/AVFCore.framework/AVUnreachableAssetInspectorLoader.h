/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVAssetInspectorLoader.h>

@class NSDictionary;

@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader {

	int _figError;
	NSDictionary* _figErrorUserInfo;
	BOOL _statusOfValueForKeyReturnsLoaded;

}
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithFigError:(int)arg1 userInfo:(id)arg2 ;
-(Class)_classForTrackInspectors;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initForUnitTests;
-(void)dealloc;
@end
