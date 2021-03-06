/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <MapKit/MapKit-Structs.h>
@class MKTileOverlayRequester, NSObject, NSData;

@interface MKTileOverlayRequesterOp : NSObject {

	GEOTileKey _key;
	MKTileOverlayRequester* _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSData* _data;

}

@property (assign,nonatomic) GEOTileKey key;                                          //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) MKTileOverlayRequester * delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSData * data;                                           //@synthesize data=_data - In the implementation block
-(void)start;
-(GEOTileKey)key;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(MKTileOverlayRequester *)delegate;
-(void)setKey:(GEOTileKey)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(MKTileOverlayRequester *)arg1 ;
-(NSData *)data;
-(void)cancel;
@end

