/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NNMKProtoAccountAuthenticationStatusRequest : PBRequest <NSCopying> {

	double _requestTime;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasRequestTime; 
@property (assign,nonatomic) double requestTime;               //@synthesize requestTime=_requestTime - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setRequestTime:(double)arg1 ;
-(double)requestTime;
-(BOOL)hasRequestTime;
-(unsigned long long)hash;
-(void)setHasRequestTime:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

