/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface GEOResourceManifestUpdateAssertion : NSObject {

	NSString* _reason;
	double _creationTimestamp;
	NSObject*<OS_xpc_object> _connection;
	int _notifyToken;

}
-(id)init;
-(id)debugDescription;
-(id)initWithReason:(id)arg1 ;
-(void)_connectToGeod;
-(void)dealloc;
@end

