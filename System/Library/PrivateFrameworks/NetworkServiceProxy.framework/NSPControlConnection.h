/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NSPControlConnection : NSObject {

	unsigned long long _flowIdentifier;

}

@property (readonly) unsigned long long flowIdentifier;              //@synthesize flowIdentifier=_flowIdentifier - In the implementation block
-(void)fetchConnectionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initFromTask:(id)arg1 ;
-(id)initFromNWConnection:(id)arg1 ;
-(id)initFromMetadata:(id)arg1 ;
-(id)initFromConnection:(id)arg1 ;
-(unsigned long long)flowIdentifier;
-(id)initFromStream:(id)arg1 ;
@end
