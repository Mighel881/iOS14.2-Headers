/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _HMContext;

@interface HMSettingsMessageHandler : NSObject {

	_HMContext* _context;

}

@property (retain) _HMContext * context;              //@synthesize context=_context - In the implementation block
-(_HMContext *)context;
-(void)sendUpdateValueMessage:(id)arg1 value:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setContext:(_HMContext *)arg1 ;
@end

