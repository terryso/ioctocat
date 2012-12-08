#import "GHApiClient.h"


@implementation GHApiClient

- (id)initWithBaseURL:(NSURL *)url {
	self = [super initWithBaseURL:url];
	// Setup GitHub content types
	NSSet *jsonTypes = [NSSet setWithObjects:kResourceContentTypeDefault, kResourceContentTypeText, kResourceContentTypeFull, kResourceContentTypeRaw, nil];
	[AFJSONRequestOperation addAcceptableContentTypes:jsonTypes];
	[self setDefaultHeader:@"Accept" value:kResourceContentTypeDefault];
	[self setParameterEncoding:AFJSONParameterEncoding];
	[self registerHTTPOperationClass:[AFJSONRequestOperation class]];
	return self;
}

@end