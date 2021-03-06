/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/CATTransportDelegate.h>

@class CATTransport, NSString;

@interface CRKInvalidateTransportOperation : CATOperation <CATTransportDelegate> {

	CATTransport* _transport;

}

@property (nonatomic,readonly) CATTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAsynchronous;
-(void)transportDidInvalidate:(id)arg1 ;
-(void)main;
-(CATTransport *)transport;
-(id)initWithTransport:(id)arg1 ;
@end

