/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_dispatch_data;
@class NSObject;

@interface NWOSCustomEndpoint : NWConcrete_nw_endpoint {

	NSObject*<OS_dispatch_data> data;
	/*^block*/id resolver_block;
	unsigned type;

}
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(unsigned long long)getHash;
-(id)copyDictionary;
-(id)copyEndpoint;
-(unsigned)type;
-(char*)createDescription:(BOOL)arg1 ;
@end

