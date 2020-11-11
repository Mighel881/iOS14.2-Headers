/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class MPModelStaticResponse;

@interface MPModelStaticRequest : MPModelRequest {

	MPModelStaticResponse* _staticResponse;

}

@property (nonatomic,retain) MPModelStaticResponse * staticResponse;              //@synthesize staticResponse=_staticResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelStaticResponse *)staticResponse;
-(void)setStaticResponse:(MPModelStaticResponse *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
