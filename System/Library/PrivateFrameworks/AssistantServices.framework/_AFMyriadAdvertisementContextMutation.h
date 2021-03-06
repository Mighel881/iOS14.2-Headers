/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMyriadAdvertisementContextMutating.h>

@class AFMyriadAdvertisementContext, NSData, NSString;

@interface _AFMyriadAdvertisementContextMutation : NSObject <AFMyriadAdvertisementContextMutating> {

	AFMyriadAdvertisementContext* _baseModel;
	unsigned long long _generation;
	NSData* _contextData;
	double _contextFetchDelay;
	struct {
		unsigned isDirty : 1;
		unsigned hasGeneration : 1;
		unsigned hasContextData : 1;
		unsigned hasContextFetchDelay : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setContextFetchDelay:(double)arg1 ;
-(void)setGeneration:(unsigned long long)arg1 ;
-(id)generate;
-(void)setContextData:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
@end

