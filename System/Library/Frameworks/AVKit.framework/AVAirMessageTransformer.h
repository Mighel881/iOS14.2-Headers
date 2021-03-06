/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVDataValueTransformer.h>

@class NSData;

@interface AVAirMessageTransformer : AVDataValueTransformer {

	NSData* _previousUnusedData;
	Class _messageClass;

}

@property (nonatomic,readonly) Class messageClass;              //@synthesize messageClass=_messageClass - In the implementation block
-(Class)messageClass;
-(id)initWithMessageClass:(Class)arg1 ;
-(id)dataForMessage:(id)arg1 ;
-(id)reverseTransformerForMessageData:(id)arg1 ;
-(void)resetState;
@end

