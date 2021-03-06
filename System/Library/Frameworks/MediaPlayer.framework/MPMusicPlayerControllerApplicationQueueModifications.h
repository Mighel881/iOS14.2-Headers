/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface MPMusicPlayerControllerApplicationQueueModifications : NSObject <NSSecureCoding> {

	NSDictionary* _insertedDescriptors;
	NSArray* _removedItemIdentifiers;

}

@property (nonatomic,readonly) NSDictionary * insertedDescriptors;              //@synthesize insertedDescriptors=_insertedDescriptors - In the implementation block
@property (nonatomic,readonly) NSArray * removedItemIdentifiers;                //@synthesize removedItemIdentifiers=_removedItemIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithInsertedDescriptors:(id)arg1 removedItemIdentifiers:(id)arg2 ;
-(NSArray *)removedItemIdentifiers;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)insertedDescriptors;
@end

