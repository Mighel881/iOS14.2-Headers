/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
@class NSObject;

@interface AFFuture : NSObject {

	NSObject*<OS_dispatch_group> _group;
	id _value;

}
-(id)waitForValue:(unsigned long long)arg1 ;
-(id)initAndGetSetterBlock:(/*^block*/id*)arg1 ;
@end

