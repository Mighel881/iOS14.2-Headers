/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPBundlesForContainerResponse : PBCodable <NSCopying> {

	NSMutableArray* _bundleIDs;

}

@property (nonatomic,retain) NSMutableArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
+(Class)bundleIDType;
-(void)setBundleIDs:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)bundleIDs;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addBundleID:(id)arg1 ;
-(unsigned long long)bundleIDsCount;
-(void)clearBundleIDs;
-(id)bundleIDAtIndex:(unsigned long long)arg1 ;
@end
