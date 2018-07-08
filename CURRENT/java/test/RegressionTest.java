import org.junit.Assert;
import org.junit.jupiter.api.Test;

import org.mariuszgromada.math.mxparser.regressiontesting.RegTestExpression;
import org.mariuszgromada.math.mxparser.regressiontesting.RegTestExpressionAPI;
import org.mariuszgromada.math.mxparser.regressiontesting.RegTestSyntax;
public final class RegressionTest {

	@Test
	public void testRegExpression() {
		Assert.assertEquals(RegTestExpression.start(), 0);
	}
	@Test
	public void testRegAPI() {
		Assert.assertEquals(RegTestExpressionAPI.start(), 0);
	}
	@Test
	public void testRegSyntax() {
		Assert.assertEquals(RegTestSyntax.start(), 0);
	}
}
